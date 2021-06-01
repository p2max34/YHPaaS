//
//  CMSQuotesDataGuideModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSQuoteIconTitleModel.h"
#import "CMSQuotesStockAndDabtTipsModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesDataGuideModel : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, strong) CMSQuotesStockAndDabtTipsModel *tips;
@property (nonatomic, copy) NSArray<CMSQuoteIconTitleModel *> *iconTitles;
@end

NS_ASSUME_NONNULL_END
