//
//  CMSSmartOrderDetailsViewController.h
//  CMSPaaSBenchmark
//
//  Created by love on 2020/11/25.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderDetailsViewController : UIViewController

@property (nonatomic, strong) id<CMSSmartOrderListViewModelProtocol> viewModel;
@property (nonatomic, copy) NSString *orderId;

@end

NS_ASSUME_NONNULL_END
