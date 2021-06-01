//
//  CMSRecommendTargetInfoView.h
//  CMSPaaS
//
//  Created by sway on 2020/9/7.
//

#import <UIKit/UIKit.h>
#import "CMSInfomationBottomBar.h"
@class CMSInformationTagModel;
@interface CMSRecommendTargetInfoBaseModel : NSObject

@property (nonatomic, copy)     NSString        *title;
@property (nonatomic, copy)     NSString        *content;
@property (nonatomic, copy)     NSString        *iconImg;
@property (nonatomic,strong)    NSArray         *subArray;      //数组扩展
@property (nonatomic,strong)    CMSTargetDataLabelModel              *subObject;

@end

@interface  CMSRecommendTargetInfoModel : NSObject

@property (nonatomic,strong)    CMSRecommendTargetInfoBaseModel *date;

@property (nonatomic,strong)    CMSRecommendTargetInfoBaseModel *reason;

@property (nonatomic,strong)    CMSRecommendTargetInfoBaseModel *block;
@property (nonatomic, copy)     NSString *uri;
@end

@class CMSRecommendTargetInfoModel;
@class CMSRecommendTargetInfoBaseModel;

typedef void(^CMSTargetDataLabelClickedBlock)(id model, UIView *actionView);

@interface CMSRecommendTargetInfoView : UIView
@property (nonatomic, copy) CMSTargetDataLabelClickedBlock clickedBlock;
@property (nonatomic, strong)  UIFont *titleFont;
@property (nonatomic, strong)  UIColor *titleTextColor;
@property (nonatomic, strong) CMSRecommendTargetInfoModel *dataModel;
@property (nonatomic, assign) BOOL isTheme;

- (instancetype)initWithFrame:(CGRect)frame
                    DataModel:(CMSRecommendTargetInfoModel*)model
                    clickedBlock:(CMSTargetDataLabelClickedBlock)clickedBlock;

//- (void)updateData:(CMSRecommendTargetInfoModel*)model;

@end


