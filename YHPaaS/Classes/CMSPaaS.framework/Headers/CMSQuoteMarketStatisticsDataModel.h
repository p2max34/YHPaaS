//
//  CMSQuoteGrailTransactionModel.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/28.
//

#import <Foundation/Foundation.h>
#import "CMSQuoteGTBreadthView.h"
#import "CMSQuoteGTCapitalView.h"
#import "CMSQuoteGTLowView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteMarketStatisticsDataModel : NSObject

@property (nonatomic, strong) NSArray<id<CMSStockProtocol> > *featuresInfo;
@property (nonatomic, strong) CMSQuoteGTLowItem *rzrqInfo;
@property (nonatomic, strong) CMSQuoteGTLowItem *dzjyInfo;
@property (nonatomic, strong) CMSQuoteGTCapitalItem *northCaptical;

@end

NS_ASSUME_NONNULL_END
