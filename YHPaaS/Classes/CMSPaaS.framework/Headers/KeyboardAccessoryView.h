//
//  KeyboardAccessoryView.h
//  cmsmobilesecurities
//
//  Created by huzj on 15/5/4.
//  Copyright (c) 2015年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol KeyboardAccessoryViewDelegate<NSObject>
-(void)dismissKeyboard;
@end

@interface KeyboardAccessoryView : UIView

+(instancetype)keyboardAccessorViewWithDelegate:(__weak id<KeyboardAccessoryViewDelegate>)delegate;

@end
