//
//  CMSServicesManager.h
//  CMSPaaS
//
//  Created by liuyanliang on 2020/8/20.
//  Copyright © 2020 cmschina. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "CMSStockHeaderModel.h"
#import "CMSMarqueeOptionalEventModel.h"
#import "CMSUIConfigLoaderProtocol.h"
#import "CMSStockProtocol.h"
#import "CMSQuotesMainProtocol.h"
#import "CMSThemeManager.h"
#import "CMSSelfSelectGroupProtocol.h"
#import "CMSStockProtocol.h"
#import "CMSAHPremiumStock.h"
#import "CMSStockBlockModel.h"
#import "CMSCapitalAccountProtocol.h"

@protocol CMSUriHandler <NSObject>

- (void)openURI:(NSString *_Nullable)uri;

/// 股票跳转至详情
- (void)openStock:(id<CMSStockProtocol> _Nullable)stock stocks:(NSArray<id<CMSStockProtocol>> * _Nullable)stocks;
/// 龙虎榜跳转至详情
- (void)openDragonTigerChart:(id<CMSStockProtocol>_Nullable)dragonTigerChart dragonTigerCharts:(NSArray<id<CMSStockProtocol>> * _Nullable)dragonTigerCharts;
/// 跳转到资金持仓
- (void)openCapitalPosition;

@end

@protocol CMSResourceLoader <NSObject>

- (void)getResourceForUrl:(NSString *_Nullable)url completeBlock:(void(^_Nullable)(NSData *_Nullable data))completeBlock;
- (void)getImageForUrl:(NSString *_Nullable)url completeBlock:(void(^_Nullable)(UIImage *_Nullable image))completeBlock;
- (void)getJsonConfigForPath:(NSString *_Nullable)path completeBlock:(void(^_Nullable)(id _Nullable jsonConfigDatas))completeBlock;
/// remotePath 服务器路径   defaultPath 本地路径
- (void)getJsonConfigForRemotePath:(NSString *_Nullable)remotePath defaultPath:(NSString *_Nullable)defaultPath completeBlock:(void(^_Nullable)(id _Nullable jsonConfigDatas))completeBlock;
@end

@protocol CMSUITemplateDataSource <NSObject>

- (NSDictionary *_Nullable)templateOfName:(NSString *_Nullable)templateName;

@end

@protocol CMSSkinSettingProtocol <NSObject>

- (NSInteger)skinStyle;

@end

@class CMSCommonServiceRequest;
@protocol CMSCommonServiceRequestProtocol  <NSObject>

- (void)executeServiceWithRequest:(CMSCommonServiceRequest *_Nonnull)request;
- (void)cancelServiceWithRequest:(CMSCommonServiceRequest *_Nonnull)request;

@end

@class CMSThemeDataModel;
@protocol CMSThemeHandler  <NSObject>

- (CMSThemeDataModel *_Nonnull)getThemeModelWithName:(NSString *_Nonnull)name;
- (CMSThemeDataModel *_Nonnull)getDefaultThemeModel;

@end

@class CMSStockQuoteRequest;
@protocol CMSStockQuotesManagerProtocol <NSObject>
- (void)updateStockQuotesOfList:(NSArray<id<CMSStockProtocol>> *_Nullable)stocks
                     properties:(NSArray<NSString *> *_Nullable)properties
                     success:(void(^_Nullable)(void))success
                        failure:(void(^_Nullable)(NSError *_Nonnull error))failure;

- (void)getStockQuotes:(CMSStockQuoteRequest * _Nonnull)request;

- (void)cancelStockQuotes:(CMSStockQuoteRequest * _Nonnull)request;

@end

@protocol CMSSelfSelectStockServiceProtocol <NSObject>

#pragma mark 组数据
/// 获取组列表数据
- (NSArray<id<CMSSelfSelectGroupProtocol>> *_Nullable)getGroupList;

/// 删除某条数据
- (void)deleteGroup:(id<CMSSelfSelectGroupProtocol>_Nullable)group;

/// 重命名某条数据
- (id<CMSSelfSelectGroupProtocol>_Nullable)renameGroup:(id<CMSSelfSelectGroupProtocol>_Nullable)group newName:(NSString *_Nullable)newName;

/// 更新自选股分组
- (void)updateGroups:(NSArray<id<CMSSelfSelectGroupProtocol>> *_Nullable)groups;

///// 改变某条数据的状态
//- (void)changeGroup:(id<CMSSelfSelectGroupProtocol>_Nullable)group;

/// 新建某条数据
- (id<CMSSelfSelectGroupProtocol>_Nullable)createGroupWithName:(NSString *_Nullable)name;

#pragma mark 股票数据
/// 获取列表数据
- (NSArray<id<CMSStockProtocol>> *_Nullable)getStockListWithGroup:(nonnull id<CMSSelfSelectGroupProtocol>)group;
/// 根据账号获取持仓列表
- (void)getStockListWithCapitalAccount:(id<CMSCapitalAccountProtocol> _Nullable)capitalAccount
                                   success:(void(^_Nullable)(NSArray<id<CMSStockProtocol>> *_Nullable stocks))success
                                   failure:(void(^_Nullable)(NSError *_Nonnull error))failure;
/// 更改位置后的数据
- (void)updateStockList:(NSArray<id<CMSStockProtocol>> * _Nullable)stockList group:(id<CMSSelfSelectGroupProtocol>_Nullable)group;
/// 删除股票
- (void)deleteStocks:(NSArray<id<CMSStockProtocol>> * _Nullable)stockList group:(id<CMSSelfSelectGroupProtocol>_Nullable)group;
/// 提醒某条数据
- (void)remindStock:(id<CMSStockProtocol>_Nullable)stock;

/// 添加一组数据到分组
- (void)addStocks:(NSArray<id<CMSStockProtocol>> *_Nullable)stocks
          toGroup:(nonnull id<CMSSelfSelectGroupProtocol>)group
         complete:(nonnull void (^)(BOOL))complete;

/// 添加股票数据到分组block回调
@property (nonatomic, copy) void(^ _Nonnull stocksToGroupAdded)(id<CMSSelfSelectGroupProtocol> _Nonnull group);

/// 删除股票数据到分组block回调
@property (nonatomic, copy) void(^ _Nonnull stocksFromGroupDeleted)(id<CMSSelfSelectGroupProtocol> _Nonnull group);

/// 自选股全量变化
@property (nonatomic, copy) void(^ _Nonnull allGroupOfstockListUpdated)(void);

/// 获取可添加组列表数据
- (NSArray<id<CMSSelfSelectGroupProtocol>> *_Nullable)getAddGroupList;
/// 获取某支股票所支持的操作类型
- (NSArray<NSString*> *_Nullable)supportedOperationsForStock:(id<CMSStockProtocol>_Nullable)stock group:(id<CMSSelfSelectGroupProtocol>_Nullable)group;
/// 获取资金账户列表
@property (nonatomic, strong) NSArray<id<CMSCapitalAccountProtocol>> * _Nullable capitalAccounts;

/// 为股票添加备注
- (void)addRemark:(NSString *_Nullable)remark stock:(id<CMSStockProtocol>_Nullable)stock;

/// 获取股票备注
- (NSString *_Nullable)getRemarkForStock:(id<CMSStockProtocol> _Nullable)stock;

///  股票列表是否需要闪烁效果
- (BOOL)twinklingWhenStockValueChanged;

#pragma mark 自选股marqueeView大事件数据获取
- (void)getMarqueeEventsDataSuccess:(void(^_Nullable)(NSArray<CMSMarqueeOptionalEventModel *> *_Nullable events))success
                            failure:(void(^_Nullable)(NSError *_Nonnull error))failure;
@end

NS_ASSUME_NONNULL_BEGIN
typedef void (^ReturnValueBlock) (id returnValue);
@interface CMSCommonServiceRequest: NSObject
@property (nonatomic, copy) ReturnValueBlock returnValueCallBack;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) NSDictionary *params;

@end

@interface CMSStockQuoteRequest : NSObject
@property (nonatomic, strong) id<CMSStockProtocol> stock;
@property (nonatomic, copy) void(^success)(void);
@end

@interface CMSServicesManager : NSObject

+ (instancetype)sharedInstance;
@property (nonatomic, strong) id<CMSThemeHandler> themeHandler;
@property (nonatomic, strong) id<CMSUriHandler> uriHandler;
@property (nonatomic, strong) id<CMSResourceLoader> resourceLoader;
@property (nonatomic, strong) id<CMSUITemplateDataSource> uiTemplateDataSource;

@property (nonatomic, strong) id<CMSUIConfigLoaderProtocol> uiConfigLoader;
@property (nonatomic, strong) id<CMSSkinSettingProtocol> skinSetting;
@property (nonatomic, strong) id<CMSStockQuotesManagerProtocol> stockQuoteManager;

/// 行情数据加载
@property (nonatomic, strong) id<CMSQuotesMainProtocol> quotesMainLoader;

/// 自选股数据获取
@property (nonatomic, strong) id<CMSSelfSelectStockServiceProtocol> selfSelectStockService;

- (void)executeServiceWithRequest:(CMSCommonServiceRequest*)request;

- (void)cancelServiceWithRequest:(CMSCommonServiceRequest*)request;

- (void)registServiceKey:(NSString *)key service:(id<CMSCommonServiceRequestProtocol>)service;
@end

NS_ASSUME_NONNULL_END
