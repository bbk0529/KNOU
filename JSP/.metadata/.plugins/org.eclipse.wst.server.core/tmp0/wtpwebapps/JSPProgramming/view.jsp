<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
<script>"undefined"==typeof CODE_LIVE&&(!function(e){var t={nonSecure:"51733",secure:"51738"},c={nonSecure:"http://",secure:"https://"},r={nonSecure:"127.0.0.1",secure:"gapdebug.local.genuitec.com"},n="https:"===window.location.protocol?"secure":"nonSecure";script=e.createElement("script"),script.type="text/javascript",script.async=!0,script.src=c[n]+r[n]+":"+t[n]+"/codelive-assets/bundle.js",e.getElementsByTagName("head")[0].appendChild(script)}(document),CODE_LIVE=!0);</script></head>
<body data-genuitec-lp-enabled="false" data-genuitec-file-id="wc1-8" data-genuitec-path="/JSPProgramming/WebContent/view.jsp">

<jsp:useBean id="boardData" class="board.BoardData" scope="request"/>
<table border="1" data-genuitec-lp-enabled="false" data-genuitec-file-id="wc1-8" data-genuitec-path="/JSPProgramming/WebContent/view.jsp">
<tr><td>제목</td><td><jsp:getProperty name="boardData" property="title"/></td></tr>
<tr><td>작성자</td><td><jsp:getProperty	name="boardData" property="writer"/></td></tr>
<tr><td>내용</td><td><jsp:getProperty name="boardData" property="text"/></td></tr>
<tr><td>비밀번호</td><td><jsp:getProperty name="boardData" property="pass"/></td></tr>

</table>

</body>
</html>