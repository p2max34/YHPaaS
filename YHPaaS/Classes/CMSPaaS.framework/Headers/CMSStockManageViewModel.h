//
//  CMSStockManageViewModel.h
//  CMSPaaS
//
//  Created by symbio on 2021/2/2.
//

#import <Foundation/Foundation.h>
#import "CMSStockProtocol.h"
#import "CMSAHPremiumStock.h"
#import "CMSContentManagementTableViewCell.h"
#import "CMSSelfSelectGroupProtocol.h"
#import "CMSSelfSelectStockListView.h"
#import "CMSCapitalAccountProtocol.h"

typedef enum : NSUInteger {
    CMSStockLoadStatusNone,
    CMSStockLoadStatusLoading,
    CMSStockLoadStatusSuccess,
    CMSStockLoadStatusFail,
} CMSStockLoadStatus;

NS_ASSUME_NONNULL_BEGIN

@interface CMSStockManageViewModel : NSObject

/// 编辑页面对应的组
@property (nonatomic, strong, readonly) id<CMSSelfSelectGroupProtocol> editGroup;
/// 默认进入的组
@property (nonatomic, strong) id<CMSSelfSelectGroupProtocol> defaultGroup;
/// 管理列表数据  原始的选中组, 如果当前分组是最近浏览或者是我的持仓，在进到自选股管理页面的时候，本组股票得变成“我的自选”
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>> *manageStockList;
/// 默认顺序的列表数据
@property (nonatomic, strong, readonly) NSArray<id<CMSStockProtocol>> *defaultManageStockList;

/// 当前组数据
@property (nonatomic, strong) id<CMSSelfSelectGroupProtocol> currentGroup;
/// 列表数据
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>> *stockList;

/// 原始的数据
@property (nonatomic, strong, readonly) NSArray<id<CMSStockProtocol>> *originStockList;
/// 默认顺序的列表数据
@property (nonatomic, strong, readonly) NSArray<id<CMSStockProtocol>> *defaultStockList;
/// 可以被添加的组数据
@property (nonatomic, strong) NSArray<id<CMSSelfSelectGroupProtocol>> *addGroupList;
/// 可见组列表
@property (nonatomic, strong) NSArray<id<CMSSelfSelectGroupProtocol>> * visibleGroups;
@property (nonatomic, copy) NSArray<id<CMSCapitalAccountProtocol>> *capitalAccounts; //资金账号数组
@property (nonatomic, copy) id<CMSCapitalAccountProtocol> capitalAccount;//当前资金账号
/// 是否是我的持仓
@property (nonatomic, assign, readonly) BOOL isMyPosition;
/// 加载视图,监听状态改变
@property (nonatomic, assign) CMSStockLoadStatus loadStatus;
/// 保留当前的排序类型
@property (nonatomic, strong) CMSSelfSelectStockSortInfo *currentSort;
/// 当前表头字段
@property (nonatomic, strong) NSArray<NSString *> * currentStockHeaderProperties;
/// 占位图内容描述
@property (nonatomic, strong, readonly) NSString * perchViewContentString;
/// 占位图按钮内容描述
@property (nonatomic, strong, readonly) NSString * perchViewButtonText;
/// 占位图图片key
@property (nonatomic, strong, readonly) NSString * loadingImageKey;

/// cell 长按可以触发的事件
- (NSArray<NSString*> *)supportedOperationsForStock:(id<CMSStockProtocol>)stock;

/// 更改位置后的数据
- (void)updateStockList:(NSArray<id<CMSStockProtocol>> *)stockList group:(id<CMSSelfSelectGroupProtocol>)group;



/// 删除股票
- (void)deleteStocks:(NSArray<id<CMSStockProtocol>> *)stocks  group:(id<CMSSelfSelectGroupProtocol>)group;
/// 提醒某条数据
- (void)remindStock:(id<CMSStockProtocol>)stock;

/// 添加一组数据到分组
- (void)addStocks:(NSArray<id<CMSStockProtocol>> *)stocks toGroup:(id<CMSSelfSelectGroupProtocol>)group complete:(void (^)(BOOL))complete;

- (void)loadData;
/// 重置选中状态
- (void)resetSelectStatus;

/// 排序
- (void)sortStocksWithInfo:(CMSSelfSelectStockSortInfo *)info;
///全量刷新当前组的股票数据
- (void)updateStockQuotes;

/// 获取stocks中的选中列表
- (NSArray<id<CMSStockProtocol>> *)selectStocksWithStocks:(NSArray<id<CMSStockProtocol>> *)stocks;

/// 加载编辑页面的数据源
- (void)loadEditPageStocks;
@end

NS_ASSUME_NONNULL_END


