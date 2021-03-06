/* WizWebView - Creates Instance of wizard UIWebView.
 *
 * @author Wizcorp Inc. [ Incorporated Wizards ]
 * @copyright 2013
 * @file WizWebView.h for PhoneGap
 *
 */ 

#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface WizWebView : NSObject <UIWebViewDelegate> {

}

@property (nonatomic, retain) UIWebView *wizView;

-(UIWebView *)createNewInstanceViewFromManager:(CDVPlugin*)myViewManager newBounds:(CGRect)webViewBounds sourceToLoad:(NSString*)src withOptions:(NSDictionary *)options;

@end
