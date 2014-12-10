//
//  ViewController.m
//  MantleLearn
//
//  Created by Halobear on 12/4/14.
//  Copyright (c) 2014 ymonke. All rights reserved.
//

#import "ViewController.h"
#import "TestDataModel.h"
#import "MTLJSONAdapter.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    NSLog(@"halo");
    
    NSURL *url = [NSURL URLWithString:@"http://api.openweathermap.org/data/2.5/weather?lat=37.785834&lon=-122.406417&units=imperial"];
    
    [NSURLConnection sendAsynchronousRequest:[NSURLRequest requestWithURL:url]
                                       queue:[NSOperationQueue mainQueue]
                           completionHandler:^(NSURLResponse* response, NSData* data, NSError* connectionError){
                               if (!connectionError) {
                                   NSDictionary *dict = [NSJSONSerialization JSONObjectWithData:data
                                                                                        options:NSJSONReadingMutableContainers
                                                                                          error:nil];
                                   //将JSON数据和Model的属性进行绑定
                                   TestDataModel *model = [MTLJSONAdapter modelOfClass:[TestDataModel class]
                                                                    fromJSONDictionary:dict
                                                                                 error:nil];
                                   
                                   
                                   
                                   
                                   NSLog(@"model=%@",model);
       
                               }
                           }];

    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
