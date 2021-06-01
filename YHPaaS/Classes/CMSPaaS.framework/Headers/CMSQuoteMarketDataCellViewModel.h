//
//  CMSQuoteMarketDataCellViewModel.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/2/26.
//

#import "CMSQuotesCellViewModel.h"
#import "CMSQuoteMarketStatisticsDataModel.h"

NS_ASSUME_NONNULL_BEGIN
@class CMSQuoteMarketStatisticsDataModel;
@interface CMSQuoteMarketDataCellViewModel : CMSQuotesCellViewModel

@property (nonatomic, strong) CMSQuoteMarketStatisticsDataModel    *grailTransactionModel;
@property (nonatomic, copy) NSDictionary *uriData;
@end

NS_ASSUME_NONNULL_END
