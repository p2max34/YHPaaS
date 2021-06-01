//
//  CMSDropDownView.h
//  cmsmobilesecurities
//
//  Created by ShenJian on 16/11/29.
//  Copyright © 2016年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum {
    kDropDownViewDirectionDown = 0,
    kDropDownViewDirectionUp
} DropDownViewDirection;


typedef void(^CMSDropDownViewCallback)(NSInteger index, BOOL cancel);


@interface CMSDropDownView : UIView

// 简易模式
- (instancetype)initWithFrame:(CGRect)frame
             dropFromPosition:(CGPoint)position
                dropDirection:(DropDownViewDirection)direction
                 contentWidth:(CGFloat)width
                       titles:(NSArray *)titles
                     complete:(CMSDropDownViewCallback)callback;

- (instancetype)initWithFrame:(CGRect)frame
             dropFromPosition:(CGPoint)position
                dropDirection:(DropDownViewDirection)direction
                 contentWidth:(CGFloat)width
                       titles:(NSArray *)titles
                       badges:(NSArray *)badges
                     complete:(CMSDropDownViewCallback)callback;

// 专业模式
- (instancetype)initWithFrame:(CGRect)frame
             dropFromPosition:(CGPoint)position
                dropDirection:(DropDownViewDirection)direction
                  contentSize:(CGSize)size
                    contentVC:(UIViewController *)contentVC
                     complete:(CMSDropDownViewCallback)callback;

- (instancetype)initWithFrame:(CGRect)frame
             dropFromPosition:(CGPoint)position
                dropDirection:(DropDownViewDirection)direction
                  contentSize:(CGSize)size
                  contentView:(UIView *)contentView
                     complete:(CMSDropDownViewCallback)callback;

- (void)show;
- (void)hideAndDismiss; // 确认并关闭
- (void)dismiss; // 取消并关闭
- (void)hideAndDismissWithCallback:(void(^)(void))callback;//有底部操作的话，需要另外调用callback
- (void)shrinkAndDismiss;
// 简易模式
@property (nonatomic, strong) UIColor           *titleColor;
@property (nonatomic, strong) UIColor           *seperatorColor;
@property (nonatomic, strong) UIColor           *listColor;
@property (nonatomic, assign) NSInteger        skin;
// 专业模式
@property (nonatomic, strong) UIViewController  *contentVC;
@property (nonatomic, assign) CGSize            contentSize;
@property (nonatomic, assign) CGRect            darkRect;
@property (nonatomic, assign) CGFloat           darkAlpha;
@property (nonatomic, assign) NSInteger         selectedIndex;
@property (nonatomic, strong) CMSDropDownViewCallback callback;

@end
