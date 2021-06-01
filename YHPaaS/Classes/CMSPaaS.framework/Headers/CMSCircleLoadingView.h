//
//  CMSCircleLoadingView.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2018/5/28.
//  Copyright © 2018年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMSCircleLoadingView : UIView

@property (nonatomic, assign) CGFloat angel;
@property (nonatomic, assign) CGFloat lineWidth; //default is 1.0f
@property (nonatomic, strong) UIColor *lineColor; // default is [UIColor lightGrayColor]
@property (nonatomic, assign) BOOL isAnimating; // default is YES
@property (nonatomic, assign) NSInteger skin;

// 开始、结束动画效果
- (void)startAnimating;
// 结束动画的时候会移除掉
- (void)stopAnimating;
@end


@interface CMSRefreshLoadingView : UIView
@property (nonatomic,strong) CMSCircleLoadingView* loadingView;
@property (nonatomic,strong) UIImageView *niuImageView;
@property (nonatomic, readonly) BOOL isAnimating; // default is YES
@property (nonatomic, assign) CGFloat zoom;
@property (nonatomic, assign) NSInteger skin;

// 开始、结束动画效果
- (void)startAnimating;
// 结束动画的时候会移除掉
- (void)stopAnimating;

@end
