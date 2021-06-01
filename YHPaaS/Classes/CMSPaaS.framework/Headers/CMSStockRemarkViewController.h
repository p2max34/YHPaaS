//
//  CMSStockRemarkViewController.h
//  CMSPaaS
//
//  Created by sway on 2020/12/23.
//

#import <UIKit/UIKit.h>
#import "CMSStockProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSStockRemarkViewController : UIViewController
/// 自选股备注变化
@property (nonatomic, copy) void(^ _Nonnull stocksRemarkUpdated)(id<CMSStockProtocol> _Nonnull stock);
@property (nonatomic, strong) id<CMSStockProtocol> stock;
@end

NS_ASSUME_NONNULL_END
