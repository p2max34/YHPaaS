//
//  CMSStockRemarkTextView.h
//  CMSPaaS
//
//  Created by sway on 2020/12/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface CMSStockRemarkTextViewStyle : NSObject
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, assign) NSInteger maxLimit;

@end
@interface CMSStockRemarkTextView : UIView
@property (nonatomic, strong) CMSStockRemarkTextViewStyle *style;
@property (nonatomic, strong) UITextView *textView;
@property (nonatomic, copy) void(^contentBlock)(NSString *content);

- (void)setTextFieldContent:(NSString *)content;
@end

NS_ASSUME_NONNULL_END
