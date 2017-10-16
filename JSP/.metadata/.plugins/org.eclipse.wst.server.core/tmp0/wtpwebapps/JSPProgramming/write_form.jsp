<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>게시판에 글 입력하기</title>
<script>"undefined"==typeof CODE_LIVE&&(!function(e){var t={nonSecure:"51733",secure:"51738"},c={nonSecure:"http://",secure:"https://"},r={nonSecure:"127.0.0.1",secure:"gapdebug.local.genuitec.com"},n="https:"===window.location.protocol?"secure":"nonSecure";script=e.createElement("script"),script.type="text/javascript",script.async=!0,script.src=c[n]+r[n]+":"+t[n]+"/codelive-assets/bundle.js",e.getElementsByTagName("head")[0].appendChild(script)}(document),CODE_LIVE=!0);</script></head>
<body data-genuitec-lp-enabled="false" data-genuitec-file-id="wc1-6" data-genuitec-path="/JSPProgramming/WebContent/write_form.jsp">
<form action="write.jsp" method="post" data-genuitec-lp-enabled="false" data-genuitec-file-id="wc1-6" data-genuitec-path="/JSPProgramming/WebContent/write_form.jsp">
<table border=1>
<tr><td>제목</td><td><input type="text" name="title" size="50"></td></tr>
<tr><td>작성자</td><td><input type="text" name="writer"></td></tr>
<tr><td>내용</td><td><textarea rows="20" name="text"></textarea></td></tr>
<tr><td>비밀번호</td><td><input type="password" name="pass" ></td></tr>
<tr><td colspan=2 align="center"><input type="submit" value="확인">
<input type="reset" value="취소"></td></tr>
</table>
</form>
</body>
</html>