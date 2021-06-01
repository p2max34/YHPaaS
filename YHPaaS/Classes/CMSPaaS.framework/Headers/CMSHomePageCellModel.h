//
//  NSObject.h
//  CMSPaaSBenchmark
//
//  Created by sway on 2020/10/22.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMSInfomationBottomBar.h"
#import "CMSHomeRecommendModel.h"
#import "CMSLinearButtonsView.h"
#import "CMSRecommendTargetInfoView.h"
#import "CMSAdaptWidthButtonCollectionView.h"

@class CMSInformationTagModel,CMSThreeLinesTextModel,CMSTextMarqueeModel;
NS_ASSUME_NONNULL_BEGIN

@interface CMSHomePageCellBaseModel : NSObject
@property (nonatomic, copy) NSString *templateName;
@property (nonatomic, copy) NSDictionary *templateData;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *columnid;
- (instancetype)initWithColumnModel:(CMSHomeRecommendColumnModel *)columnModel templateName:(NSString *)templateName templateData:(NSDictionary *)templateData;

@end

@interface CMSHomeNewsflashModel : CMSHomePageCellBaseModel
@property (nonatomic, strong) NSArray<CMSTextMarqueeModel *> *titles;
@property (nonatomic, copy) NSString *icon;
@end

///titleContent
@interface CMSHomeNewsModel : CMSHomePageCellBaseModel
@property (nonatomic, strong) NSArray<CMSInformationTagModel *> *tags;
@property (nonatomic, copy) NSString *title;
@property (nonatomic,copy) NSString *content;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *leftItems;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *rightItems;
@end

///谈经论股
@interface CMSHomeLecturerMediaModel : CMSHomePageCellBaseModel
@property (nonatomic, copy) NSDictionary *styleData;
@property (nonatomic,assign) BOOL adTag;/// 判断是否是预告
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *peopleTag;
@property (nonatomic,copy) NSString *noticeTag;
@property (nonatomic,copy) NSString *imageURL;
@property (nonatomic,copy) NSString *headline; //  市场风向标
@property (nonatomic,copy) NSString *headImage; //  头像image
@property (nonatomic,copy) NSString *startTime; //  预告时间
@property (nonatomic,assign) NSInteger wtchNum;///订阅量
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *leftItems;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *rightItems;
@end

///选股问句
@interface CMSHomeTitleLinearButtonsModel : CMSHomePageCellBaseModel
@property (nonatomic, strong) NSArray<CMSLinearButtonItem *> *linearButtonItems;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *subTitle;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *leftItems;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *rightItems;
@end

///今日热门
@interface CMSHomePlateModel : CMSHomePageCellBaseModel
@property (nonatomic,copy) NSString *leftIconImage;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *arrow_rightText;
@property (nonatomic,copy) NSString *arrow_rightIconImage;
@property (nonatomic, strong) NSArray<CMSThreeLinesTextModel *> *hotDatas;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *rightItems;
@end

///banner-
@interface CMSHomeBannerModel : CMSHomePageCellBaseModel
@property (nonatomic,copy) NSString *imageURL;
@end

///近期埋伏-
@interface CMSHomeNewsInfomationModel : CMSHomePageCellBaseModel
@property (nonatomic, strong) CMSRecommendTargetInfoModel *recommendTargetInfo;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *leftItems;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *rightItems;
@end


///牛牛学院-
@interface CMSHomeCollegeBannerModel : CMSHomePageCellBaseModel
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *subTitle;
@property (nonatomic,copy) NSString *icon;
@property (nonatomic,copy) NSString *imageURL;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *leftItems;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *rightItems;
@end

///股市有招-
@interface CMSHomeLabelMediaModel : CMSHomePageCellBaseModel
//@property (nonatomic,copy) NSString *backImageURL;
@property (nonatomic,copy) NSString *contentURL;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *leftItems;
@property (nonatomic, strong) NSArray<CMSInfomationBottomBarItem *> *rightItems;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *imageURL;
@end

///定制推荐内容
@interface CMSHomeChannelTagsModel : CMSHomePageCellBaseModel
@property (nonatomic, strong)   NSArray<CMSAdaptWidthButtonItem *>    *items;
@property (nonatomic,copy) NSString *arrow_rightText;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *icon;

@end


NS_ASSUME_NONNULL_END
