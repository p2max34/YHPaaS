//
//  CMSQuoteMarketDataViewCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/12.
//

#import <UIKit/UIKit.h>
#import "CMSBaseQuoteCell.h"
#import "CMSQuoteMarketStatisticsDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteMarketDataViewCell : CMSBaseQuoteCell

@property (nonatomic, strong) CMSQuoteMarketStatisticsDataModel *model;

@end

NS_ASSUME_NONNULL_END
