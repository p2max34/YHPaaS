//
//  CMSAHStockCell.h
//  CMSPaaS
//
//  Created by SJ on 2021/4/6.
//

#import "CMSAHPremiumStock.h"
#import "CMSStockQuotesBaseListCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSAHStockCell : CMSStockQuotesBaseListCell

@property (nonatomic, strong) CMSAHPremiumStock * AHModel;

- (void)setModel:(CMSAHPremiumStock *_Nullable)model needPushQuote:(BOOL)needPush;


@end

NS_ASSUME_NONNULL_END
