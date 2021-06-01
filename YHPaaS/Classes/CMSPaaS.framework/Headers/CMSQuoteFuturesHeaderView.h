//
//  CMSQuoteFuturesHeaderView.h
//  CMSPaaS
//
//  Created by HJ on 2021/1/7.
//

#import <UIKit/UIKit.h>
#import "CMSQuotesPageModel.h"

NS_ASSUME_NONNULL_BEGIN

@class CMSQuotesChildrenModel;
@interface CMSQuoteFuturesHeaderView : UITableViewHeaderFooterView
@property (nonatomic, strong) CMSQuotesSectionModel *sectionModel;

//@property (nonatomic, strong) void(^quoteFuturesTapTypeCallBack)(CMSQuotesChildrenModel *model);
@end

NS_ASSUME_NONNULL_END

