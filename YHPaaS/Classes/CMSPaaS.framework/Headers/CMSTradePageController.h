//
//  CMSTradePageController.h
//  CMSPaaS
//
//  Created by SJ on 2020/11/4.
//

#import <UIKit/UIKit.h>
#import "CMSTradePageViewModelProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSTradePageController : UIViewController

@property (nonatomic, strong) id<CMSTradePageViewModelProtocol> viewModel;

@end

NS_ASSUME_NONNULL_END
