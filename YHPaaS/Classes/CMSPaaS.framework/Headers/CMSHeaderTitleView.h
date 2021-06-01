//
//  CMSHeaderTitleView.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CMSBtnType) {
    CMSBtnTypeTitle,
};

@interface CMSHeaderTitleView : UIView

@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) BOOL isMoreTitle;
@property(nonatomic, assign) CGSize intrinsicContentSize;

@property (nonatomic, strong) void(^btnTapCallBack)(NSInteger tag);

@end

NS_ASSUME_NONNULL_END
