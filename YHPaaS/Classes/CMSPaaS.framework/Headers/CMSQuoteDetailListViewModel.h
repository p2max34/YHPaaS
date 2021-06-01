//
//  CMSQuoteDetailListViewModel.h
//  CMSPaaS
//
//  Created by symbio on 2021/5/13.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesListDetailModel.h"
#import "CMSSelfSelectStockListView.h"
#import "CMSQuotesListSubBaseViewModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteDetailListViewModel : NSObject
@property (nonatomic, strong) CMSQuotesListDetailUriModel *uriModel;    // 配置字段模型

/// 所有配置
@property (nonatomic, strong) NSArray<CMSQuotesListDetailModel *> *detailConfigs;
/// 提取所有配置中的标题,用于展示导航条的弹出
@property (nonatomic, strong, readonly) NSArray *detailConfigTitles;
/// 当前选中的详情配置
@property (nonatomic, strong) CMSQuotesListDetailModel *currentDetailConfig;
/// 当前选中的详情具体配置
@property (nonatomic, strong) CMSQuotesListDetailTypeModel *currentDetailTypeConfig;

@property (nonatomic, strong, readonly) CMSQuotesListSubBaseViewModel *currentDetailTypeViewModel;

// 股票列表
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>>  *stockCellModels;

/// 是否显示导航条下面的tab标签
@property (nonatomic, assign, readonly) BOOL showTab;
@property (nonatomic, assign, readonly) double tabHeight;


@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *currentHeaders;   //当前表头

/// 分页数量
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, assign) int64_t totalNumber;

@property (nonatomic, copy) NSString *cacheKey;

@property (nonatomic, strong) CMSSelfSelectStockSortInfo *sortInfo;


/// 生成配置字段模型
- (CMSQuotesListDetailUriModel *)gengerConfigFieldModelWithObj:(NSObject *)obj;

/// 选中导航条中的某个page标题
- (void)selectedDetailPageTitle:(NSString *)title;
/// 选中导航条下面tab的某个id
- (void)selectedDetailTabId:(NSString *)tabId;
@end

NS_ASSUME_NONNULL_END
