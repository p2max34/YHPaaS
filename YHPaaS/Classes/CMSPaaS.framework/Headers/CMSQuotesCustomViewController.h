//
//  CMSQuotesCustomViewController.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/6.
//

#import <UIKit/UIKit.h>
#import "CMSQuotesCustomModuleViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesCustomViewController : UIViewController
@property (nonatomic, strong) CMSQuotesCustomModuleViewModel *customViewModel;
@property (nonatomic, strong) CMSQuotesPageModel     *pageModel;
@end

NS_ASSUME_NONNULL_END

