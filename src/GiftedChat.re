open BsReactNative;

let component = ReasonReact.statelessComponent("GiftedChat");

let styles =
  StyleSheet.create(
    Style.(
      {
        "container": style([flex(1.), justifyContent(Center)]),
        "label": style([textAlign(Center), fontSize(Float(20.))]),
      }
    ),
  );

let make = (~label, _children) => {
  ...component,
  render: _self =>
    <View style=styles##container>
      <Text style=styles##label> (label |> ReasonReact.string) </Text>
    </View>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~label=jsProps##label, [||])
  );