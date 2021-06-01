//
//  CMSGridButtonCollectionViewCell.h
//  CMSPaaS
//
//  Created by sway on 2020/9/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface CMSGridButtonItem : NSObject

@property (nonatomic, copy)   NSString *title;
@property (nonatomic, copy)   NSString *uri;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, assign) NSInteger index;

@end
@interface CMSGridButtonCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) UILabel *title;


@end

NS_ASSUME_NONNULL_END
