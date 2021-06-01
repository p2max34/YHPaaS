//
//  CMSQuotesConfigCollectionViewCell.h
//  CMSPaaS
//
//  Created by symbio on 2021/1/11.
//

#import <UIKit/UIKit.h>
#import "CMSQuotesPageModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesConfigCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) UIButton *titleButton;
@property (nonatomic, strong) UIButton *deleteButton;
@property (nonatomic, strong) UIButton *addButton;
- (void)setModel:(CMSQuotesPageModel *)model indexPath:(NSIndexPath *)indexPath isEditing:(BOOL)isEditing;
@end

NS_ASSUME_NONNULL_END
