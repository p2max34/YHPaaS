//
//  CMSSelfSelectStockListView.h
//  CMSPaaS
//
//  Created by liuyanliang on 2021/1/23.
//

#import "CMSRollingMenusView.h"
#import "CMSStockHeaderModel.h"
#import "CMSStockProtocol.h"
#import "CMSSelfSelectStockTopView.h"
#import "CMSAHPremiumStock.h"
@class CMSQuotesListSubBaseViewModel;
@interface CMSSelfSelectStockSortInfo : NSObject

@property (nonatomic, copy) NSString *property;
@property (nonatomic, assign) NSComparisonResult order;

@end

@interface CMSSelfSelectStockListView : CMSRollingMenusView

@property (nonatomic, assign) NSUInteger otherColumnNumPerScreen;//一屏幕可容几个cell(需先于keysArray配置)
@property (nonatomic, copy) NSString *firstColumnWidth;//左边股票标题区域占比，判断有“%"则为比例，无则为固定值(需先于keysArray配置)
@property (nonatomic, strong) CMSSelfSelectStockTopView *stockListHeaderView;
@property (nonatomic, copy) NSString *stocksHeaderName;
@property (nonatomic, assign) BOOL headerViewEditBtnEnabled;
@property (nonatomic, assign) BOOL showHeaderView;
@property (nonatomic, assign) BOOL doWithoutPush;   //设置数据不推送，默认推送
@property (nonatomic, assign) BOOL isAdapterFont;   //字体是否自适应屏幕
@property (nonatomic, copy) NSArray<id<CMSStockProtocol>> *stocks;
@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *headerItems;
@property (nonatomic, strong) CMSSelfSelectStockSortInfo *stockSortInfo;
@property (nonatomic, copy) CGFloat(^additionalHeaderHeightBlock)(void);
@property (nonatomic, copy) UIView *(^additionalHeaderViewBlock)(void);
@property (nonatomic, copy) void(^stockSelectedBlock)(id<CMSStockProtocol>stock, NSArray<id<CMSStockProtocol>> *allStocks);
@property (nonatomic, copy) void(^stockSortChangedBlock)(CMSSelfSelectStockSortInfo *sortInfo);
@property (nonatomic, copy) void(^capitalFlowSelectedBlock)(void);
@property (nonatomic, copy) void(^editStockHeaderBlock)(void);
@property (nonatomic, copy) NSArray<NSString *> *(^menuTitlesForStockBlock)(id<CMSStockProtocol>stock);
@property (nonatomic, copy) void(^menuActionForStockBlock)(NSString *menuTitle, id<CMSStockProtocol>stock);
@property (nonatomic, copy) void(^horizontalScrollBlock)(BOOL isScrolling);
@property (nonatomic, assign) BOOL twinklingForCell;
@property (nonatomic, strong) CMSQuotesListSubBaseViewModel *viewModel;

- (void)stopListCellHorizontalScrolling;
@end

