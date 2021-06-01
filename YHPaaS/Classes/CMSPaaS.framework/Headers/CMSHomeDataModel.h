//
//  CMSHomeDataModel.h
//  CMSPaaSBenchmark
//
//  Created by sway on 2020/10/19.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CMSHomeDataModel : NSObject

@end
///新闻资讯
@interface CMSHomeNewsInformationDataModel: CMSHomeDataModel
@property (nonatomic,copy)      NSString    *pubdate;
@property (nonatomic,copy)      NSString    *category;
@property (nonatomic,copy)      NSString    *title;
@end

///谈经论股
@interface CMSHomeTalkAboutStocksDataModel : CMSHomeDataModel
@property (nonatomic,assign)    BOOL         adTag;
@property (nonatomic,copy)      NSString    *activityName;
@property (nonatomic,copy)      NSString    *lecturerInfo_userName;
@property (nonatomic,assign)    NSInteger    startTime;
@property (nonatomic,assign)    NSInteger    watchNum;
@property (nonatomic,copy)      NSString    *lectureAd_imageUrl;
@property (nonatomic,copy)      NSString    *title;
@property (nonatomic,strong)    NSArray     *activityTagList;
@end


///首席之声
@interface CMSHomeVoiceOfChiefDataModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *title;
@property (nonatomic,assign)    NSInteger    pubDt;
@property (nonatomic,copy)      NSString    *ID;
@end

///选股问句
@interface CMSHomeStocksASKDataModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *question;
@end

///主题投资
@interface CMSHomeThemeOfInvestmentDataModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *pubdate;
@property (nonatomic,copy)      NSString    *title;
@property (nonatomic,copy)      NSString    *secuTop3;
@property (nonatomic,copy)      NSString    *msgTitle;
@property (nonatomic,copy)      NSString    *ID;
@end

///今日热门
@interface CMSHomeHotStocksDataModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *secuTop3;//
@property (nonatomic,copy)      NSString    *plateName;//
@property (nonatomic,assign)    double     allChg;//
@property (nonatomic,copy)      NSString    *ID;
@end

///banner
@interface CMSHomeBannerDataModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *mktid;
@property (nonatomic,copy)      NSString    *uri;
@property (nonatomic,copy)      NSString    *img;
@end

///招商解盘
@interface CMSHomeAnalyzeStocksDataModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *labCodeDesc;
@property (nonatomic,copy)      NSString    *title;
@property (nonatomic,copy)      NSString    *rptTypDesc;
@property (nonatomic,assign)    NSInteger    pubDt;
@property (nonatomic,copy)      NSString    *ID;
@property (nonatomic,copy)      NSString    *sumTitle;
@end

///近期埋伏
@interface CMSHomeRecommendStockDataModel : CMSHomeDataModel
@property (nonatomic,assign)    double     plateChg;
@property (nonatomic,copy)      NSString    *timeDesc;
@property (nonatomic,copy)      NSString    *title;
@property (nonatomic,copy)      NSString    *secuTop3;
@property (nonatomic,copy)      NSString    *msgTitle;
@property (nonatomic,copy)      NSString    *plateName;
@end

///功能模块
@interface  CMSHomeStocksFunctionDataModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *ID;
@end

///牛牛学院
@interface CMSHomeNiuniuCollegeDataModel : NSObject
@property (nonatomic,copy)      NSString    *columnid;
@property (nonatomic,copy)      NSString    *title;
@property (nonatomic,copy)      NSString    *contentlink;
@end

///股市有招
@interface CMSHomeStocksOfSchemeDataModel : CMSHomeDataModel

@property (nonatomic,copy)      NSString    *title;
@property (nonatomic,copy)      NSString    *stime;
@property (nonatomic,copy)      NSString    *logoshow;
@property (nonatomic,copy)      NSString    *ID;
@property (nonatomic,copy)      NSString    *presenturl;
@end

///制定推荐内容
@class CMSHomeChannelTagsContentModel;
@interface CMSHomeChannelTagsDataModel : CMSHomeDataModel
@property (nonatomic,strong)      NSArray<CMSHomeChannelTagsContentModel *>   *stockJson;
@property (nonatomic,copy)      NSString    *title;

@end

///制定推荐内容
@interface CMSHomeChannelTagsContentModel : CMSHomeDataModel
@property (nonatomic,copy)      NSString    *secuSht;
@property (nonatomic,copy)      NSString    *code;
@property (nonatomic,copy)      NSString    *market;

@end
