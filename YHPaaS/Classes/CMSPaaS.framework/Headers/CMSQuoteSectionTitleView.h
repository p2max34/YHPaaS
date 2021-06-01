//
//  CMSQuoteSectionTitleView.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/1/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^CMSQuoteTitleViewMoreButtonBlock)(void);

@interface CMSQuoteSectionTitleView : UIView
@property (nonatomic, nullable, copy) CMSQuoteTitleViewMoreButtonBlock moreBlock;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *subTitleLabel;
@property (nonatomic, strong) UIButton *moreButton;

/// 构建组头titleView (高度就是主标题的高, 不用再给高)
/// 构造方法
- (instancetype)initWithFrame:(CGRect)frame;

/// 便利构造方法
/// @param title 标题
/// @param subTitle 副标题
/// @param showMoreButton 是否显示更多按钮
/// @param moreBlock 按钮block
- (instancetype)initWithTitle:(NSString *)title
                     subTitle:(nullable NSString *)subTitle
               showMoreButton:(BOOL)showMoreButton
                    moreBlock:(nullable CMSQuoteTitleViewMoreButtonBlock)moreBlock;

- (void)setTitle:(NSString *)title;
- (void)setSubTitle:(nullable NSString *)subTitle;
- (void)setShowMoreButton:(BOOL)showMoreButton;

@end

NS_ASSUME_NONNULL_END
