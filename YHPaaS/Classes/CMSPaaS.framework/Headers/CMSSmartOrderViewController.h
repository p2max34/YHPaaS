//
//  CMSSmartOrderViewController.h
//  CMSPaaSBenchmark
//
//  Created by love on 2020/11/25.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderViewController : UIViewController

@property (nonatomic, strong) id<CMSSmartOrderViewModelProtocol> viewModel;
@property (nonatomic, copy)   NSString *status;

@end

NS_ASSUME_NONNULL_END
