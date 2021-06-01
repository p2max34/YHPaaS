//
//  CMSSelfSelectStockViewController.h
//  CMSPaaS
//
//  Created by sway on 2020/11/13.
//

#import <UIKit/UIKit.h>
@protocol CMSMultiColStocksViewProtocol;

typedef UIView<CMSMultiColStocksViewProtocol> *(^CMSMultiColStocksViewBlock)(CGRect frame);

@interface CMSSelfSelectStockViewController : UIViewController

@property (nonatomic, copy) CMSMultiColStocksViewBlock multiColStocksViewBlock;
/// 大事提醒 是否需要显示
@property (nonatomic, assign) BOOL showEventMarqueeView;

- (void)jumpToSelfSelectStockManagementWithIndex:(NSInteger)index;

@end





