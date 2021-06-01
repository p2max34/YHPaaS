//
//  CMSTitleLinearButtonsView.h
//  CMSPaaS
//
//  Created by sway on 2020/9/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class CMSLinearButtonItem;

typedef void(^TitleLinearButtonsClickedBlock)(CMSLinearButtonItem *item);

@interface CMSTitleLinearButtonsView : UIView
@property (nonatomic, copy) TitleLinearButtonsClickedBlock clickedBlock;
@property (nonatomic, strong) UIColor       *titleLabelTextColor;
@property (nonatomic, strong) UIColor       *subTitleLabelTextColor;
@property (nonatomic, strong) UIFont        *subTitleLabelFont;
@property (nonatomic, strong) UIFont        *titleLabelFont;

- (instancetype)initWithFrame:(CGRect)frame
                        title:(NSString *)title
                        subTitle:(NSString*)descriptions
                        items:(NSArray<CMSLinearButtonItem *> *)items
                        clickedBlock:(TitleLinearButtonsClickedBlock)clickedBlock;

-(void)updateDataWithTitle:(NSString *)title subTitle:(NSString *)descriptions items:(NSArray <CMSLinearButtonItem *> *)items;
@end

NS_ASSUME_NONNULL_END
