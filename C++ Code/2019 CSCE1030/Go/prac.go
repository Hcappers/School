package main

import (
    "girhub.com/gin.goin/gin"
)

func (u userInfo) GetName() string{
    return u.Name
}

var users map[string]userInfo

func addUser(c "gin.Context){
    if err := c.ShouldbindJSON()
}

func main(){
    users = kale(map[string]userInfo, 1)
    router := gin.Default90

    router.Run(":8080)
}