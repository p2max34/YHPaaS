//
//  CMSQuoteListHeaderView.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/1.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"
#import "CMSQuotesBasicListCellModel.h"
#import "CMSCommonStockTopView.h"
#import "CMSMarketHeaderView.h"
#import "CMSSegmentHeaderView.h"
#import "CMSAdaptWidthButtonCollectionView.h"

NS_ASSUME_NONNULL_BEGIN

@class CMSAdaptWidthButtonItem,CMSQuotesListDetailModel,CMSQuotesListDetailTypeModel;

@interface CMSQuoteListHeaderView : UIView
@property (nonatomic, strong) CMSAdaptWidthButtonCollectionView *adaptButtonScrollView;
@property (nonatomic, strong) CMSMarketHeaderView *sectionHeaderView;
@property (nonatomic, strong) CMSSegmentHeaderView *segmentHeaderView;
//表头view
@property (nonatomic, strong) CMSCommonStockTopView *stockTopView;
@property (nonatomic, strong) NSArray<CMSStockHeaderModel *> *stockHeaders;
@property (nonatomic, strong) NSArray<CMSAdaptWidthButtonItem *> *adaptItems;
@property (nonatomic, strong) CMSQuotesBasicListCellModel *pageAdaptItemModel;
@property (nonatomic, strong) CMSQuotesBasicListCellTypeModel *pageStockHeaderModel;
@property (nonatomic, assign) BOOL isSegmentStyle;  //一级表头样式
@property (nonatomic, assign) NSUInteger otherColumnNumPerScreen;//一屏幕可容几个cell(需先于keysArray配置)
@property (nonatomic, copy) NSString *firstColumnWidth;//左边股票标题区域占比，判断有“%"则为比例，无则为固定值(需先于keysArray配置)

@property (nonatomic, copy) void(^selectAdaptItemCallBack)(CMSAdaptWidthButtonItem *item,NSInteger index);

/// 不可编辑的title
- (void)setTitle:(NSString *)title;
/// 可编辑的title
- (void)setCanEditTitle:(NSString *)title titles:(NSArray<NSString *> *)titles selectTitleCallBack:(void(^)(NSString *title,NSInteger index))selectTitleCallBack;

@end

NS_ASSUME_NONNULL_END
