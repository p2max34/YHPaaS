//
//  YHTBubbleTipView.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2018/12/13.
//  Copyright © 2018年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHTBubbleBackView.h"

#pragma mark - JDFTooltipViewCompletionBlock
/**
 *  Completion block for JDFTooltipView animation completions. No paramaters, no return value.
 */
typedef void (^YHTBubbleTipViewCompletionBlock)(void);


@interface YHTBubbleTipView : UIView

#pragma mark Tooltip Text

/**
 *  The text that is displayed in the tooltip.
 */
@property (nonatomic, copy) NSString *tooltipText;

/**
 *  The colour of the tooltip text. Default is @c white.
 */
@property (nonatomic, strong) UIColor *textColour;

/**
 *  The font for the text shown in the tooltip.
 */
@property (nonatomic, strong) UIFont *font;


#pragma mark Other Options

/**
 *  The background colour for the tooltip. Default is @c darkGray.
 */
@property (nonatomic, strong) UIColor *tooltipBackgroundColour;

/**
 *  The direction that the tooltip's arrow will point
 */
@property (nonatomic) YHTBubbleTipViewArrowDirection arrowDirection;

/**
 *  Indicates whether the tooltip will dismiss itself when it is touched.
 */
@property (nonatomic) BOOL dismissOnTouch;

#pragma mark Initialisation
/**
 *  Initialises A JDFTooltipView with the arrow at the specified point. If you want to support interface orientation, you will need to do so manually for a tooltip created with this initialiser. If you want rotation to be handled automatically, you should use one of the initWithTargetView: or initWithTargetBarButtonItem: methods instead.
 *
 *  @param targetPoint    The point at which the tooltip's arrow points.
 *  @param hostView       The view in which the tooltip will be displayed.
 *  @param tooltipText    The text displayed in the tooltip.
 *  @param arrowDirection The direction of the tooltip's arrow.
 *  @param width          The width of the tooltip. If the text goes beyond this width, the tooltip will be resized vertically to accomodate it.
 *
 *  @return An initialised JDFTooltipView.
 */
- (instancetype)initWithTargetPoint:(CGPoint)targetPoint hostView:(UIView *)hostView tooltipText:(NSString *)tooltipText arrowDirection:(YHTBubbleTipViewArrowDirection)arrowDirection width:(CGFloat)width;

/**
 *  Initialises A JDFTooltipView with the arrow at the specified point. If you want to support interface orientation, you will need to do so manually for a tooltip created with this initialiser. If you want rotation to be handled automatically, you should use one of the initWithTargetView: or initWithTargetBarButtonItem: methods instead.
 *
 *  @param targetPoint         The point at which the tooltip's arrow points.
 *  @param hostView            The view in which the tooltip will be displayed.
 *  @param tooltipText         The text displayed in the tooltip.
 *  @param arrowDirection      The direction of the tooltip's arrow.
 *  @param width               The width of the tooltip. If the text goes beyond this width, the tooltip will be resized vertically to accomodate it.
 *  @param showCompletionBlock A block that gets executed after the tooltip is shown.
 *  @param hideCompletionBlock A block that gets executed after the tooltip has been dismissed.
 *
 *  @return An initialised JDFTooltipView.
 */
- (instancetype)initWithTargetPoint:(CGPoint)targetPoint hostView:(UIView *)hostView tooltipText:(NSString *)tooltipText arrowDirection:(YHTBubbleTipViewArrowDirection)arrowDirection width:(CGFloat)width showCompletionBlock:(YHTBubbleTipViewCompletionBlock)showCompletionBlock hideCompletionBlock:(YHTBubbleTipViewCompletionBlock)hideCompletionBlock;

/**
 *  Initialises a JDFTooltipView. The tooltip will try to position the arrow pointing towards the targetView, in the specified direction.
 *
 *  @param targetView     The focus of the tooltip. The tooltip will attempt to point the arrow towards the targetView.
 *  @param hostView       The view in which the tooltip will be displayed.
 *  @param tooltipText    The text displayed in the tooltip.
 *  @param arrowDirection The direction of the tooltip's arrow.
 *  @param width          The width of the tooltip. If the text goes beyond this width, the tooltip will be resized vertically to accomodate it.
 *
 *  @return An initialised JDFTooltipView.
 */
- (instancetype)initWithTargetView:(UIView *)targetView hostView:(UIView *)hostView tooltipText:(NSString *)tooltipText arrowDirection:(YHTBubbleTipViewArrowDirection)arrowDirection width:(CGFloat)width;

/**
 *  Initialises a JDFTooltipView. The tooltip will try to position the arrow pointing towards the targetView, in the specified direction.
 *
 *  @param targetView     The focus of the tooltip. The tooltip will attempt to point the arrow towards the targetView.
 *  @param hostView       The view in which the tooltip will be displayed.
 *  @param tooltipText    The text displayed in the tooltip.
 *  @param arrowDirection The direction of the tooltip's arrow.
 *  @param width          The width of the tooltip. If the text goes beyond this width, the tooltip will be resized vertically to accomodate it.
 *  @param showCompletionBlock A block that gets executed after the tooltip is shown.
 *  @param hideCompletionBlock A block that gets executed after the tooltip has been dismissed.
 *
 *  @return An initialised JDFTooltipView.
 */
- (instancetype)initWithTargetView:(UIView *)targetView hostView:(UIView *)hostView tooltipText:(NSString *)tooltipText arrowDirection:(YHTBubbleTipViewArrowDirection)arrowDirection width:(CGFloat)width showCompletionBlock:(YHTBubbleTipViewCompletionBlock)showCompletionBlock hideCompletionBlock:(YHTBubbleTipViewCompletionBlock)hideCompletionBlock;

#pragma mark Showing/Hiding Tooltips
/**
 *  Shows the tooltip.
 */
- (void)showAnimated:(BOOL)animated;

/**
 *  Shows the tooltip in the specified view.
 *
 *  @param view The view to show the tooltip in.
 */
- (void)showInView:(UIView *)view animated:(BOOL)animated;

/**
 *  Hides the tooltip, optionally animated.
 *
 *  @param animated BOOL determining whether to animate the hide or not.
 */
- (void)hideAnimated:(BOOL)animated;

@end
