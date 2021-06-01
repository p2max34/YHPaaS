//
//  CMSQuotesController.h
//  CMSPaaS
//
//  Created by HJ on 2020/12/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class CMSQuotesPageModel,CMSQuotesMainController;

@interface CMSQuotesController : UIViewController 
@property (nonatomic, strong)   CMSQuotesPageModel          *typeModel;
@property (nonatomic, weak)     CMSQuotesMainController     *mainController;

@end

NS_ASSUME_NONNULL_END
