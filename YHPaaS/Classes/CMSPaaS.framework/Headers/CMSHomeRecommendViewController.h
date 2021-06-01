//
//  CMSHomeRecommendViewController.h
//  CMSPaaS
//
//  Created by sway on 2020/10/29.
//

#import <UIKit/UIKit.h>

@protocol CMSHomeRecommendProtocol <NSObject>

- (void)queryRecommendDetailsWithParameter:(NSDictionary *_Nullable)paramter completeBlock:(void(^_Nullable)(NSArray *_Nullable models, NSError * _Nullable error))completeBlock;


- (void)newsDislikeWithParameter:(NSDictionary *_Nullable)paramter completeBlock:(void(^_Nullable)(NSString *_Nullable message, NSError * _Nullable error))completeBlock;

/// 获取快讯 配置文件列表
- (void)getNewsFlashListDatasCallBack:(void(^_Nonnull)(NSArray * _Nonnull datas))datasCallBack;
/// 首页不喜欢弹窗 内容列表
- (void)getDislikeListDatasCallBack:(void(^_Nonnull)(NSArray * _Nonnull datas))datasCallBack;
/// 首页列表中间刷新视图
- (void)getListMidRefreshButtonDataCallBack:(void(^_Nonnull)(NSDictionary * _Nonnull data))datasCallBack;
@end

NS_ASSUME_NONNULL_BEGIN

@interface CMSHomeRecommendViewController : UIViewController
/// 首页推荐
@property (nonatomic, strong) id<CMSHomeRecommendProtocol> homeRecommendResourceLoader;
@end

NS_ASSUME_NONNULL_END
