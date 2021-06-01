//
//  YHTKeyboardHideToolBar.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2020/11/19.
//  Copyright © 2020 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHTKeyboardViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol YHTKeyboardToolBarDelegate;

@interface YHTCompositeKeyboardToolBar : UIView

- (instancetype)initWithFrame:(CGRect)frame defalutKeyboardType:(YHTKeyboardType)keyboardType;

@property (nonatomic, strong) UITextField  *textField;

@end

NS_ASSUME_NONNULL_END
