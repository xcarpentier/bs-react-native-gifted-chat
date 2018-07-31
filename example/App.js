import React from 'react'
import { StyleSheet, Text, View } from 'react-native'
import { GiftedChat } from 'bs-react-native-gifted-chat'

export default class App extends React.Component {
  render() {
    return (
      <View style={styles.container}>
        <GiftedChat label={'GiftedChat component from reasonml'} />
      </View>
    )
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
})
