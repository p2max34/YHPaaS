//
//  CMSQuoteStockCollectionPackCellViewModel.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/2/26.
//

#import "CMSQuotesCellViewModel.h"
#import "CMSQuotesListDetailTypeModel.h"
#import "CMSQuoteIconTitleModel.h"
#import "CMSQuoteStockCollectionPackCellDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteStockCollectionPackCellViewModel : CMSQuotesCellViewModel
/// 股票, 板块 collection 龙虎榜, 数据源
@property (nonatomic,nullable, strong) NSArray<CMSQuoteStockCollectionViewItemModel *>  *stockCollectionItems;
/// 股票, 板块 collection 龙虎榜, 数据缓存池 <tag->items>
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSArray<CMSQuoteStockCollectionViewItemModel *>*> *stockCollectionItemsCache;

/// 龙虎榜才需要, 副标题新股数量描述文字
@property (nonatomic, copy) NSString *stockAmountString;

@property (nonatomic, assign) NSInteger row;

@property (nonatomic, strong) NSDictionary *style;

@property (nonatomic, strong) NSNumber *selectedIndex;

@property (nonatomic, strong) CMSQuoteStockCollectionPackCellDataModel *configData;

- (void)bindStock;

- (void)unbindStock;

@end

NS_ASSUME_NONNULL_END
