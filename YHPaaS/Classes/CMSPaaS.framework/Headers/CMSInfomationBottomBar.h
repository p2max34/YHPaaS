//
//  CMSTipBar.h
//  CMSBarDemo
//
//  Created 吴演 on 2020/8/28.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSTargetDataLabel.h"
#import "CMSServicesManager.h"

typedef NS_ENUM(NSInteger, CMSBottomBarItemType) {
    CMSBottomBarItemTypeTargetDataType = 0,
    CMSBottomBarItemTypeTextType,
    CMSBottomBarItemTypeButtonType
};

@interface CMSTargetDataLabelModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, assign) CMSTargetDataLabelType type;

@end

@class CMSInfomationBottomBarItem;
typedef void(^CMSBottomBarItemTypeClickedBlock)(CMSInfomationBottomBarItem *selectItem, UIView *actionView);

@interface CMSInfomationBottomBarItem : NSObject

@property (nonatomic, assign) CMSBottomBarItemType type;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, copy) NSString *buttonImage;
/// 支持imagekey设置, 优先级最高
@property (nonatomic, copy) NSString *buttonImageKey;
@property (nonatomic, strong) CMSTargetDataLabelModel *targetDataModel;

@end

@interface CMSInfomationBottomBar : UIView

@property (nonatomic, copy) CMSBottomBarItemTypeClickedBlock clickedBlock;

- (instancetype)initWithFrame:(CGRect)frame
                    leftItems:(NSArray<CMSInfomationBottomBarItem *> *)leftItems
                   rightItems:(NSArray<CMSInfomationBottomBarItem *> *)rightItems
                 clickedBlock:(CMSBottomBarItemTypeClickedBlock)clickedBlock;

- (void)setLeftItems:(NSArray<CMSInfomationBottomBarItem *> *)leftItems
          rightItems:(NSArray<CMSInfomationBottomBarItem *> *)rightItems;

@end


