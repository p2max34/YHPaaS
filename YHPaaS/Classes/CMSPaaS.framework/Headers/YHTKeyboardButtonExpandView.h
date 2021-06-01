//
//  YHTKeyboardButtonExpandView.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2019/7/11.
//  Copyright © 2019年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, YHTKeyboardButtonPosition) {
    YHTKeyboardButtonPositionLeft,
    YHTKeyboardButtonPositionInner,
    YHTKeyboardButtonPositionRight,
    YHTKeyboardButtonPositionCount
};

@interface YHTKeyboardButtonExpandView : UIView

- (instancetype)initWithKeyboardButton:(UIButton *)button;

@end
