//
//  CMSMultiSelectActionSheet.h
//  PopDemo
//
//  Created by symbio on 2021/4/6.
//

#import "CMSPopController.h"
#import "CMSMultiSelectActionSheetCell.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSMultiSelectActionSheet : CMSPopController
@property (nonatomic, strong, readonly) UIButton *bottomBarButton;
+ (instancetype)actionSheetWithTitle:(nullable NSString *)title
                               items:(NSArray<CMSMultiSelectActionSheetItem *> *)items
                   didSelectCallback:(void(^)(NSArray<CMSMultiSelectActionSheetItem *> *selectItems))callback;;
@end

NS_ASSUME_NONNULL_END
