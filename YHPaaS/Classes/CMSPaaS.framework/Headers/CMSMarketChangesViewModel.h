//
//  CMSMarketChangesViewModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/4/15.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCellViewModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSMarketChangesViewModel : CMSQuotesCellViewModel
@property (nonatomic, strong) CMSStockQuotesTimeChartModel *data;
@property (nonatomic, strong) NSArray *labelNodes;

- (void)loadMarketChangesData;
@end

NS_ASSUME_NONNULL_END
