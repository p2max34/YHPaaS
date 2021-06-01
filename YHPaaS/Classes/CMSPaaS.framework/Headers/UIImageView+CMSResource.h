//
//  UIImageView+CMSGETUIImageView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/8/19.
//

#import <UIKit/UIKit.h>
#import <FLAnimatedImage/FLAnimatedImage.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (CMSResource)

@property (nonatomic, strong) FLAnimatedImageView *cms_FLAnimatedImage;

// 根据图片url数据加载图片
-(void)cms_setImageWithURL:(NSURL *)url;
// 根据图片路径加载图片
-(void)cms_setImageWithPath:(NSString *)path;
// 根据图片数据加载图片
-(void)cms_setImageWithData:(NSData *)data;

- (void)cms_setImageWithValue:(NSString *)value;
@end

NS_ASSUME_NONNULL_END
