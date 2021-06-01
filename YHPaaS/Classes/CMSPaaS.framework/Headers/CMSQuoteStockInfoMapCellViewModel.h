//
//  CMSQuoteStockInfoMapCellViewModel.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/2/26.
//
#import "CMSQuotesCellViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteStockInfoMapCellViewModel : CMSQuotesCellViewModel

@property (nonatomic, strong) NSArray<CMSStockInfoMapItem *>  *mapItems;

- (void)bindStocks;

- (void)unBindStocks;

@end

NS_ASSUME_NONNULL_END
