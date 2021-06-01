//
//  YHTKeyboardButtonItem.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2019/7/4.
//  Copyright © 2019年 cms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIColor+CMSFactory.h"

#define Big_Font   [UIFont boldSystemFontOfSize:22]
#define Small_Font [UIFont boldSystemFontOfSize:18]
#define Text_Color HEXCOLOR(0x333333)

@interface YHTKeyboardButtonItem : NSObject

@property (nonatomic, strong) NSString *imageName;
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) UIColor *highlightbackgroundColor;
@property (nonatomic, strong) UIColor *selectedbackgroundColor;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, strong) UIColor *shadowColor;
@property (nonatomic, assign) BOOL enabled;

@property (nonatomic, weak) id target;
@property (nonatomic, assign) SEL selectAction;
@property (nonatomic, weak) id touchDownTarget;
@property (nonatomic, assign) SEL touchDownSelectAction;
@property (nonatomic, strong) UILongPressGestureRecognizer *longGes;
@property (nonatomic, strong) UIPanGestureRecognizer       *panGes;

+ (instancetype)initWithImageName:(NSString *)imageName
                  backgroundColor:(UIColor *)backgroundColor
                      shadowColor:(UIColor *)shadowColor
                           height:(CGFloat)height
                            width:(CGFloat)width
                           target:(id)target
                         selector:(SEL)selector;

+ (instancetype)initWithImageName:(NSString *)imageName
                  backgroundColor:(UIColor *)backgroundColor
                      shadowColor:(UIColor *)shadowColor
                           height:(CGFloat)height
                            width:(CGFloat)width
                           target:(id)target
                         selector:(SEL)selector
                          enabled:(BOOL)enabled;

+ (instancetype)initWithImageName:(NSString *)imageName
                  backgroundColor:(UIColor *)backgroundColor
         highlightbackgroundColor:(UIColor *)highlightbackgroundColor
          selectedbackgroundColor:(UIColor *)selectedbackgroundColor
                      shadowColor:(UIColor *)shadowColor
                           height:(CGFloat)height
                            width:(CGFloat)width
                           target:(id)target
                         selector:(SEL)selector;

+ (instancetype)initWithImageName:(NSString *)imageName
                  backgroundColor:(UIColor *)backgroundColor
         highlightbackgroundColor:(UIColor *)highlightbackgroundColor
          selectedbackgroundColor:(UIColor *)selectedbackgroundColor
                      shadowColor:(UIColor *)shadowColor
                           height:(CGFloat)height
                            width:(CGFloat)width
                           target:(id)target
                         selector:(SEL)selector
                          enabled:(BOOL)enabled
                          longGes:(UILongPressGestureRecognizer *)ges;

+ (instancetype)initWithText:(NSString *)text
                        font:(UIFont *)font
                   textColor:(UIColor *)textColor
             backgroundColor:(UIColor *)backgroundColor
    highlightbackgroundColor:(UIColor *)highlightbackgroundColor
     selectedbackgroundColor:(UIColor *)selectedbackgroundColor
                 shadowColor:(UIColor *)shadowColor
                      height:(CGFloat)height
                       width:(CGFloat)width
                      target:(id)target
                    selector:(SEL)selector;

+ (instancetype)initWithText:(NSString *)text
                        font:(UIFont *)font
                   textColor:(UIColor *)textColor
             backgroundColor:(UIColor *)backgroundColor
                 shadowColor:(UIColor *)shadowColor
                      height:(CGFloat)height
                       width:(CGFloat)width
                      target:(id)target
                    selector:(SEL)selector;

+ (instancetype)initWithText:(NSString *)text
                        font:(UIFont *)font
                      height:(CGFloat)height
                       width:(CGFloat)width
                      target:(id)target
                    selector:(SEL)selector;

+ (instancetype)initWithText:(NSString *)text
                      height:(CGFloat)height
                       width:(CGFloat)width
                      target:(id)target
                    selector:(SEL)selector;

+ (instancetype)initWithText:(NSString *)text
                        font:(UIFont *)font
    highlightbackgroundColor:(UIColor *)highlightbackgroundColor
                      height:(CGFloat)height
                       width:(CGFloat)width
                      target:(id)target
                    selector:(SEL)selector;

+ (instancetype)initWithText:(NSString *)text
    highlightbackgroundColor:(UIColor *)highlightbackgroundColor
                      height:(CGFloat)height
                       width:(CGFloat)width
                      target:(id)target
                    selector:(SEL)selector;

- (UIButton *)generateButton;

@end

