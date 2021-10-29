import React, { useEffect } from 'react'
import { StyleSheet, Text, View } from 'react-native'
import { TestJS } from './src/JavaScript/Test'

interface Props {

}

const App = (props: Props) => {
  useEffect(() => {
    TestJS()
  }, [])
  return (
    <View style={styles.container}>
      <Text>App</Text>
    </View>
  )
}

export default App;
const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center'
  }
})
