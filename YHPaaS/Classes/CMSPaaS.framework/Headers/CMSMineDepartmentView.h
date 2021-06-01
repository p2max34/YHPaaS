//
//  CMSMineDepartmentView.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CMSTitleIconModelProtocol;
@interface CMSMineDepartmentView : UIView

@property (nonatomic, strong) UILabel *title;
@property (nonatomic, strong) UILabel *address;
@property (nonatomic, strong) UILabel *name;
@property (nonatomic, strong) UIButton *phoneButton;

@property (nonatomic, strong) id<CMSTitleIconModelProtocol> phoneButtonModel;
@property (nonatomic, strong) void(^phoneBtnCallBack)(NSString *uri);

- (void)setIcon:(NSString *)icon title:(NSString *)title name:(NSString *)name address:(NSString *)address phoneButtonModel:(id<CMSTitleIconModelProtocol>)phoneButtonModel phoneButtonCallBack:(void(^)(NSString *uri))phoneButtonCallBack;

@end

NS_ASSUME_NONNULL_END
