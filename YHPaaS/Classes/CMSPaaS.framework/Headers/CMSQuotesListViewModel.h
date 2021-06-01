//
//  CMSQuotesListViewModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCellViewModel.h"
#import "CMSQuotesListDetailModel.h"
#import "CMSQuotesBasicListCellModel.h"
#import "NSString+CMSCash.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CMSStockProtocol;
@class CMSQuotesCellListDataModel;

@interface CMSQuotesListViewModel : CMSQuotesCellViewModel
@property (nonatomic, strong) NSString *oldProperty;
@property (nonatomic, strong) CMSQuotesCellListDataModel *dataModel;
@property (nonatomic, strong) NSMutableDictionary *headerData;
@property (nonatomic, copy) NSArray<CMSQuotesBasicListCellModel *> *segmentArray;            //头部数据
@property (nonatomic, copy) NSArray<NSString *> *segmentTitlesArray;                         //头部标题数据
@property (nonatomic, assign) BOOL isShowMoreListButton;
@property (nonatomic, assign) NSInteger page;   //当前选择了第几个组头
@property (nonatomic, assign) NSInteger segment;//表头下标
@property (nonatomic, assign) CGFloat headerViewHeight;
@property (nonatomic, assign) CGFloat footerViewHeight;
@property (nonatomic, strong) NSArray <NSString *> *propertys;
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>> *showStockCellModels;


/// 分页数量
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, assign) int64_t totalNumber;
/// 高度. 当高度动态变化时,拿来对比
@property (nonatomic, assign) float height;

// 股票列表
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>>  *stockCellModels;
// 股票列表缓存数据
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSArray<id<CMSStockProtocol>> *> *stockCellModelsCache;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSNumber *> *stockCellTotalNumCache;
@property (nonatomic, copy) NSString *cellClassName;
// 加载股票列表 第一个选项的默认数据
//- (void)loadStockQuotesListDefultData;
// 根据 uri 读取股票列表详情配置
- (void)loadQuotesListDetailJsonConfigWithUriModel:(CMSQuotesListDetailUriModel *)uriModel callBack:(void(^)(NSArray<CMSQuotesListDetailModel *> *data))callBack;

// 根据 jsonPath 读取股票列表详情表头配置
- (void)loadDetailHeadersJson:(id)headers withAllHeader:(NSString *)allHeader CallBack:(void(^)(NSArray<CMSStockHeaderModel *> *datas))callBack;
- (void)loadQuotesListDetailWithDataKey:(NSString *)dataKey;
// 通过headerKey查找要显示的表头
- (void)loadQuotesListDetailHeaderJsonConfigWithHeaderKey:(NSString *)headerKey callBack:(void(^)(NSArray<CMSStockHeaderModel *> *datas))callBack;

/// 请求页面数据(包括 ah股 正常股票 和板块)
/// @param param 排序数据及(setDomain)细分市场的常量 等相关配置
/// @param isMore 是否加载更多
/// @param propertys 属性集合 (现价，涨幅，跌幅...)
/// @param contentParam 内容配置路径,当内容需要从本地配置加载时,需要此字段
- (void)loadStockCellModelsWithParam:(NSString *)param
                              isMore:(BOOL)isMore
                           propertys:(NSArray<CMSStockHeaderModel *> *)propertys
                        contentParam:(nullable NSArray<CMSStock *> *)contentParam;

//行情股票列表解析uri获取下标page，segment
- (void)getPageAndSegmentWithUri:(NSString *)uri callBack:(void(^)(NSInteger page, NSInteger segment))callBack;

- (NSString *)getCellClassName;

@end

NS_ASSUME_NONNULL_END
