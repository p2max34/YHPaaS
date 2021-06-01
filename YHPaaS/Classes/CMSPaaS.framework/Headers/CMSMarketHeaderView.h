//
//  CMSMarketHeaderView.h
//  CMSPaaS
//
//  Created by SJ on 2020/12/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSMarketHeaderView : UIView

@property (nonatomic, strong) UIButton *titleBtn;

@property (nonatomic, copy) void(^buttonClickBlock)(UIButton *btn);


@end

NS_ASSUME_NONNULL_END
