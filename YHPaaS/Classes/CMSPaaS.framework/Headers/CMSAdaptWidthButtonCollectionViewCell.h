//
//  CMSAdaptWidthButtonCollectionViewCell.h
//  CMSPaaS
//
//  Created by sway on 2020/10/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface CMSAdaptWidthButtonItem : NSObject
@property (nonatomic, copy)   NSString *title;
@property (nonatomic, assign)   BOOL isSelected;
@property (nonatomic, copy)   NSString *key;

@end

@interface CMSAdaptWidthButtonCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) UILabel *title;
+ (CGFloat)widthForCell:(NSString *)text byFont:(UIFont*)font;
@end

NS_ASSUME_NONNULL_END
