//
//  CMSMultiColSelfSelectStockViewController.h
//  CMSPaaS
//
//  Created by sway on 2021/3/25.
//

#import <UIKit/UIKit.h>
@protocol CMSMultiColStocksViewProtocol;
@protocol CMSSelfSelectGroupProtocol;

NS_ASSUME_NONNULL_BEGIN

@interface CMSMultiColSelfSelectStockViewController : UIViewController

@property (nonatomic, copy) void (^loginAccountBlock)(void);
@property (nonatomic, copy) void (^unlockAccountBlock)(void);

- (instancetype)initWithCurrentGroup:(id<CMSSelfSelectGroupProtocol>)currentGroup;

- (void)setmultView:(UIView<CMSMultiColStocksViewProtocol> *)mulview;

- (void)updateCurrentStockList;

@end

NS_ASSUME_NONNULL_END
