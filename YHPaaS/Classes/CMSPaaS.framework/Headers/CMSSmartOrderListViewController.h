//
//  CMSSmartOrderListViewController.h
//  CMSPaaSBenchmark
//
//  Created by love on 2020/11/25.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderListViewController : UIViewController

@property (nonatomic, strong) id<CMSSmartOrderListViewModelProtocol> viewModel;

- (void)refreshOrderData;

@end

NS_ASSUME_NONNULL_END
